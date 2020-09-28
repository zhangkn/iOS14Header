/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OITSUNoCopyDictionary, NSMutableDictionary;

@interface TCImportFontCache : NSObject {

	OITSUNoCopyDictionary* mFontCache;
	NSMutableDictionary* mFontNameCache;

}

@property (nonatomic,readonly) NSMutableDictionary * fontNameCache; 
+(CGSize)stringSizeForText:(id)arg1 ctFontRef:(CTFontRef)arg2 ;
-(void)dealloc;
-(id)init;
-(CTFontRef)ctFontRefForKey:(id)arg1 ;
-(CTFontRef)fontRefForFontName:(id)arg1 size:(int)arg2 ;
-(CGSize)stringSizeForSpaceWithFontName:(id)arg1 fontSize:(int)arg2 ;
-(CGSize)stringSizeForText:(id)arg1 fontName:(id)arg2 fontSize:(int)arg3 ;
-(NSMutableDictionary *)fontNameCache;
@end
