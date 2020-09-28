/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSyncFakeMutableBaseItem.h>
#import <MapsSuggestions/MapsSyncMutableReviewedPlace.h>

@class NSDate, NSUUID, NSString;

@interface MapsSyncFakeMutableReviewedPlace : MapsSyncFakeMutableBaseItem <MapsSyncMutableReviewedPlace> {

	BOOL _hasUserReviewed;
	unsigned long long _muid;
	NSDate* _lastSuggestedReviewDate;

}

@property (assign,nonatomic) unsigned long long muid;                       //@synthesize muid=_muid - In the implementation block
@property (nonatomic,retain) NSDate * lastSuggestedReviewDate;              //@synthesize lastSuggestedReviewDate=_lastSuggestedReviewDate - In the implementation block
@property (assign,nonatomic) BOOL hasUserReviewed;                          //@synthesize hasUserReviewed=_hasUserReviewed - In the implementation block
@property (nonatomic,copy) NSUUID * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMuid:(unsigned long long)arg1 ;
-(unsigned long long)muid;
-(void)commitEditsWithCompletion:(/*^block*/id)arg1 ;
-(NSDate *)lastSuggestedReviewDate;
-(void)setLastSuggestedReviewDate:(NSDate *)arg1 ;
-(BOOL)hasUserReviewed;
-(void)setHasUserReviewed:(BOOL)arg1 ;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 hasUserReviewed:(BOOL)arg2 lastSuggestedReviewDate:(id)arg3 ;
@end
