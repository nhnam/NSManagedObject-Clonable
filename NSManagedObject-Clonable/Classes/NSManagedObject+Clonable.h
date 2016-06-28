//
//  NSManagedObject+Clonable.h
//  Pods
//
//  Created by Nguyen Hoang Nam on 28/6/16.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface NSManagedObject(Clonable)
-(NSManagedObject *)cloneInContext:(NSManagedObjectContext *)context withCopiedCache:(NSMutableDictionary *)alreadyCopied exludeEntities:(NSArray *)namesOfEntitiesToExclude;
-(NSManagedObject *)cloneInContext:(NSManagedObjectContext *)context exludeEntities:(NSArray *)namesOfEntitiesToExclude;
-(NSManagedObject *) clone;
@end
