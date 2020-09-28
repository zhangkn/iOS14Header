/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDConnectionLineAbstractLayout.h>

@interface TSDConnectionLineOrthogonalLayout : TSDConnectionLineAbstractLayout
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint)arg3 ;
-(CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4 ;
-(BOOL)canEndpointsCoincide;
-(CGRect)orthoRectOfLayout:(id)arg1 outset:(double)arg2 ;
-(CGPoint)axisSnapPoint:(CGPoint)arg1 toXs:(vector<double, std::__1::allocator<double> >*)arg2 toYs:(vector<double, std::__1::allocator<double> >*)arg3 withThreshold:(double)arg4 ;
-(void)addEndpointSnapsToXs:(vector<double, std::__1::allocator<double> >*)arg1 andYs:(vector<double, std::__1::allocator<double> >*)arg2 ;
@end
