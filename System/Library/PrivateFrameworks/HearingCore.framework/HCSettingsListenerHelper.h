/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HCSettings, NSMutableArray;

@interface HCSettingsListenerHelper : NSObject {

	id _listenerAddress;
	HCSettings* _delegate;
	NSMutableArray* _selectorKeys;

}
-(id)initWithListenerAddress:(id)arg1 andDelegate:(id)arg2 ;
-(void)dealloc;
-(void)addSelectorKey:(SEL)arg1 ;
@end
