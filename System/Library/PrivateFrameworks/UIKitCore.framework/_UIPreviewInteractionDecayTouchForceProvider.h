/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding.h>

@protocol _UIPreviewInteractionTouchForceProviding, UICoordinateSpace;
@class NSString;

@interface _UIPreviewInteractionDecayTouchForceProvider : NSObject <_UIPreviewInteractionTouchForceProviding> {

	id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
	double _initialTouchForce;
	CGPoint _location;
	id<UICoordinateSpace> _coordinateSpace;
	BOOL _active;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) double touchForce; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActive:(BOOL)arg1 ;
-(void)cancelInteraction;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(BOOL)isActive;
-(double)touchForce;
-(id)initWithTouchForceProvider:(id)arg1 ;
@end

