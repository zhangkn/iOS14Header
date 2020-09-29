/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:39 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSFetchRequest, NSArray, NSManagedObjectContext;


@protocol MTFetchedResultsControllerProtocol
@property (nonatomic,readonly) NSFetchRequest * fetchRequest; 
@property (nonatomic,copy) NSArray * propertyKeys; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSArray * fetchedObjects; 
@property (assign,nonatomic,__weak) id<NSFetchedResultsControllerDelegate> delegate; 
@required
-(NSManagedObjectContext *)managedObjectContext;
-(id)objectAtIndexPath:(id)arg1;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
-(id)indexPathForObject:(id)arg1;
-(NSFetchRequest *)fetchRequest;
-(BOOL)performFetch:(id*)arg1;
-(void)setDelegate:(id)arg1;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(id)arg1;
-(id<NSFetchedResultsControllerDelegate>)delegate;
-(NSArray *)fetchedObjects;

@end
