/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface NSISPlaybackOperation : NSObject {

	NSMutableDictionary* oldIdentsToNewVariables;
	NSMutableArray* variableDelegates;

}
-(void)dealloc;
-(id)unwrapVariable:(id)arg1 ;
-(id)unwrapLinearExpression:(id)arg1 onEngine:(id)arg2 ;
-(void)playbackOneAction:(id)arg1 onEngine:(id)arg2 ;
-(id)init;
-(void)_addToEngine:(id)arg1 ;
@end
