/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSString, NSDate, PXAssetCollectionActionManager;


@protocol PXCMMInvitation <NSObject,PXMediaTypeAggregating>
@property (nonatomic,readonly) long long shareType; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) id<PXCMMInvitationParticipant> owner; 
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset; 
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider; 
@property (nonatomic,readonly) PXAssetCollectionActionManager * assetCollectionActionManager; 
@required
-(NSString *)identifier;
-(NSString *)subtitle;
-(id<PXCMMInvitationParticipant>)owner;
-(PXAssetCollectionActionManager *)assetCollectionActionManager;
-(NSString *)title;
-(NSDate *)expiryDate;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(void)acceptWithCompletionHandler:(/*^block*/id)arg1;
-(id)contextForActivityType:(unsigned long long)arg1;
-(unsigned long long)count;
-(NSDate *)creationDate;
-(long long)shareType;

@end

