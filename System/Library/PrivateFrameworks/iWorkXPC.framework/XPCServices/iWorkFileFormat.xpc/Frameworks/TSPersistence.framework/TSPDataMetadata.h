/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSReading/TSPObject.h>

@class TSUColor;

@interface TSPDataMetadata : TSPObject {

	TSUColor* _fallbackColor;

}

@property (nonatomic,copy) TSUColor * fallbackColor;              //@synthesize fallbackColor=_fallbackColor - In the implementation block
-(void)setFallbackColor:(TSUColor *)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(TSUColor *)fallbackColor;
-(void)saveToMessage:(DataMetadata*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const DataMetadata*)arg1 unarchiver:(id)arg2 ;
@end

