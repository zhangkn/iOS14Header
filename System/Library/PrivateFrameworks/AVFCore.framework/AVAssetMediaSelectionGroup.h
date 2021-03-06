/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVMediaSelectionGroup.h>

@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {

	AVAsset* _asset;
	NSDictionary* _dictionary;
	NSArray* _groupMediaCharacteristics;
	NSArray* _options;
	AVMediaSelectionOption* _defaultOption;
	BOOL _isStreamingGroup;

}
-(id)asset;
-(id)options;
-(void)dealloc;
-(id)initWithAsset:(id)arg1 dictionary:(id)arg2 ;
-(id)_groupMediaCharacteristics;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(BOOL)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)_isStreamingGroup;
-(id)dictionary;
-(id)defaultOption;
@end

