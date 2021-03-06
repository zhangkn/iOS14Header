/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPath.h>

@class OITSUBezierPath;

@interface MFPhonePath : MFPath {

	OITSUBezierPath* m_path;
	int m_state;

}
-(BOOL)isOpen;
-(int)end;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)currentPoint;
-(int)fill:(id)arg1 ;
-(int)begin;
-(int)abort;
-(id)init;
-(int)widen:(id)arg1 ;
-(int)flatten;
-(int)state;
-(int)stroke:(id)arg1 ;
-(int)closeFigure;
-(void)appendBezierPath:(id)arg1 dc:(id)arg2 ;
-(id)initWithPath:(id)arg1 state:(int)arg2 ;
-(id)getBezierPath;
@end

