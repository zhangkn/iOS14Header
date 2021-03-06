/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>

@class SXViewport, SXViewportDebuggerOverlayView, NSString;

@interface SXViewportDebugger : NSObject <SXViewportChangeListener> {

	SXViewport* _viewport;
	SXViewportDebuggerOverlayView* _dynamicBoundsView;
	SXViewportDebuggerOverlayView* _appearStateIndicator;

}

@property (nonatomic,readonly) SXViewport * viewport;                                             //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) SXViewportDebuggerOverlayView * dynamicBoundsView;                 //@synthesize dynamicBoundsView=_dynamicBoundsView - In the implementation block
@property (nonatomic,readonly) SXViewportDebuggerOverlayView * appearStateIndicator;              //@synthesize appearStateIndicator=_appearStateIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(void)viewport:(id)arg1 boundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithViewport:(id)arg1 ;
-(void)update;
-(void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(CGRect)arg2 ;
-(void)presentOnView:(id)arg1 ;
-(SXViewportDebuggerOverlayView *)dynamicBoundsView;
-(SXViewportDebuggerOverlayView *)appearStateIndicator;
-(id)colorForAppearState:(unsigned long long)arg1 ;
@end

