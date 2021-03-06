/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface _UIContextMenuActionsListSection : NSObject {

	NSUUID* _identifier;
	BOOL _isCompact;
	BOOL _prefersSingleLineActions;

}

@property (nonatomic,readonly) BOOL isCompact;                             //@synthesize isCompact=_isCompact - In the implementation block
@property (nonatomic,readonly) BOOL prefersSingleLineActions;              //@synthesize prefersSingleLineActions=_prefersSingleLineActions - In the implementation block
+(id)sectionWithMenu:(id)arg1 ;
-(BOOL)isCompact;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)prefersSingleLineActions;
-(unsigned long long)hash;
@end

