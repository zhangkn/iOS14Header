/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface AVTCompositor : NSObject {

	NSMutableSet* _textureProviders;

}
+(id)propertyNames;
-(void)addClient:(id)arg1 ;
-(id)init;
-(void)removeClient:(id)arg1 ;
-(void)skinColorDidChange;
-(void)componentDidChangeForTypes:(unsigned long long)arg1 ;
-(void)configureMaterial:(id)arg1 propertyNamed:(id)arg2 memoji:(id)arg3 ;
@end
