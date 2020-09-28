/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class NSDate, PDFPageLayerEffect;

@interface PDFCoachMark : NSObject {

	NSDate* creationTime;
	CGRect frame;
	PDFPageLayerEffect* layerEffect;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)playEffect:(id)arg1 ;
-(double)effectTimeLeft;
@end
