/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:25 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying> {

	BOOL mIsPrinting;
	BOOL mIsPDF;
	BOOL mHasSuppressedBackgrounds;

}

@property (nonatomic,readonly) BOOL isPDF; 
@property (nonatomic,readonly) BOOL isPrinting; 
@property (nonatomic,readonly) BOOL hasSuppressedBackgrounds; 
+(id)context;
+(id)contextInfoForScene:(id)arg1 ;
+(id)contextInfoWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 ;
+(void)setIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 forScene:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPDF;
-(BOOL)isPrinting;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSuppressedBackgrounds;
-(void)setTSDCGContextInfoForCGContext:(CGContextRef)arg1 ;
-(id)initWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 ;
@end

