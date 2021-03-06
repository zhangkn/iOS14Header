/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMutableDictionary, NSDictionary;

@interface PXFeedbackStore : NSObject {

	NSMutableDictionary* _store;

}

@property (nonatomic,readonly) NSDictionary * store;              //@synthesize store=_store - In the implementation block
-(NSDictionary *)store;
-(id)init;
-(unsigned long long)sentFeedbackCount;
-(unsigned long long)unsentFeedbackCount;
-(void)_cleanupStore;
-(BOOL)_saveStore;
-(BOOL)_loadStore;
-(id)_storePath;
-(void)addFeedbackEntry:(id)arg1 ;
-(void)removeFeedbackEntry:(id)arg1 ;
-(id)longDescription;
@end

