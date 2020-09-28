/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADCubicBezierToPathElement : OADPathElement {

	OADAdjustPoint mControlPoint1;
	OADAdjustPoint mControlPoint2;
	OADAdjustPoint mToPoint;
	BOOL mRelative;

}
-(OADAdjustPoint)controlPoint1;
-(OADAdjustPoint)controlPoint2;
-(OADAdjustPoint)toPoint;
-(BOOL)relative;
-(id)initWithControlPoint1:(OADAdjustPoint)arg1 controlPoint2:(OADAdjustPoint)arg2 toPoint:(OADAdjustPoint)arg3 ;
-(void)setRelative:(BOOL)arg1 ;
@end
