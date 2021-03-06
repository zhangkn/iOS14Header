/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TMLUIControlState : NSObject {

	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
+(BOOL)isControlStateClass:(id)arg1 ;
+(void)registerControlState:(id)arg1 forClass:(Class)arg2 ;
+(void)verifyStateProperty:(id)arg1 withClass:(Class)arg2 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
@end

