/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKContinuationMetadataBase.h>

@class WLKPlayable, NSString, NSNumber, NSArray;

@interface WLKContinuationMetadata : WLKContinuationMetadataBase {

	WLKPlayable* _playable;
	NSString* _deleteID;
	NSNumber* _siriActionsExpirationEpochMillis;
	NSArray* _siriActionsCategories;

}

@property (nonatomic,readonly) WLKPlayable * playable;                                        //@synthesize playable=_playable - In the implementation block
@property (nonatomic,copy,readonly) NSString * deleteID;                                      //@synthesize deleteID=_deleteID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * siriActionsExpirationEpochMillis;              //@synthesize siriActionsExpirationEpochMillis=_siriActionsExpirationEpochMillis - In the implementation block
@property (nonatomic,copy,readonly) NSArray * siriActionsCategories;                          //@synthesize siriActionsCategories=_siriActionsCategories - In the implementation block
-(WLKPlayable *)playable;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)deleteID;
-(NSNumber *)siriActionsExpirationEpochMillis;
-(NSArray *)siriActionsCategories;
@end

