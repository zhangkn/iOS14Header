/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBApplicationSceneViewStatusBarDescriptor : NSObject {

	BOOL _forceHidden;

}

@property (assign,getter=isForcedHidden,nonatomic) BOOL forceHidden;              //@synthesize forceHidden=_forceHidden - In the implementation block
+(id)statusBarDescriptorWithForceHidden:(BOOL)arg1 ;
-(id)initWithForceHidden:(BOOL)arg1 ;
-(void)setForceHidden:(BOOL)arg1 ;
-(id)debugDescription;
-(BOOL)isForcedHidden;
@end
