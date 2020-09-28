/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVMediaSelectionOption.h>

@class NSString, NSDictionary, AVWeakReference;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption {

	id _groupID;
	id _groupMediaType;
	NSString* _optionMediaType;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(id)mediaType;
-(BOOL)isPlayable;
-(void)dealloc;
-(id)locale;
-(id)_groupMediaType;
-(id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 ;
-(id)_groupID;
-(id)group;
-(BOOL)isEqual:(id)arg1 ;
-(id)commonMetadata;
-(unsigned long long)hash;
-(id)availableMetadataFormats;
-(id)dictionary;
-(id)metadataForFormat:(id)arg1 ;
@end
