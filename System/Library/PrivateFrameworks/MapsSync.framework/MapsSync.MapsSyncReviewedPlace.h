/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class NSDate, _TtC8MapsSync27MapsSyncAnonymousCredential;

@interface MapsSync.MapsSyncReviewedPlace : MapsSync.MapsSyncBaseItem {

	 _muid;
	 _hasUserReviewed;
	 _uploadedPhotosCount;
	 _anonymousCredential;
	 _anonymousCredentialUnstored;

}

@property (readonly,nonatomic) unsigned long long muid; 
@property (readonly,nonatomic) NSDate * lastSuggestedReviewDate; 
@property (readonly,nonatomic) BOOL hasUserReviewed; 
@property (readonly,nonatomic) int uploadedPhotosCount; 
@property (readonly,nonatomic) _TtC8MapsSync27MapsSyncAnonymousCredential * anonymousCredential; 
+(void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
+(id)fetchWithMuids:(id)arg1 ;
+(void)fetchWithMuids:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)muid;
-(id)initWithObject:(id)arg1 ;
-(int)uploadedPhotosCount;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(Class)managedObjectClass;
-(void)executeOnFirstSave:(id)arg1 ;
-(NSDate *)lastSuggestedReviewDate;
-(BOOL)hasUserReviewed;
-(_TtC8MapsSync27MapsSyncAnonymousCredential *)anonymousCredential;
-(id)initWithAnonymousCredential:(id)arg1 ;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(Class)mutableObjectClass;
@end

