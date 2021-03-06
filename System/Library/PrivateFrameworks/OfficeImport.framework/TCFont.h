/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, TCFontFamily;

@interface TCFont : NSObject <NSCopying> {

	NSDictionary* _namesByLanguage;
	NSString* _psName;
	TCFontFamily* _family;
	TCFontStyling _styling;

}

@property (nonatomic,readonly) NSDictionary * namesByLanguage;              //@synthesize namesByLanguage=_namesByLanguage - In the implementation block
@property (nonatomic,readonly) NSString * psName;                           //@synthesize psName=_psName - In the implementation block
@property (nonatomic,readonly) TCFontStyling styling;                       //@synthesize styling=_styling - In the implementation block
@property (assign,nonatomic) TCFontFamily * family;                         //@synthesize family=_family - In the implementation block
+(id)fontWithFont:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TCFontFamily *)family;
-(int)preferredLanguage;
-(NSString *)psName;
-(TCFontStyling)styling;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setFamily:(TCFontFamily *)arg1 ;
-(id)equivalentDictionary;
-(NSDictionary *)namesByLanguage;
-(id)initWithNamesByLanguage:(id)arg1 psName:(id)arg2 styling:(TCFontStyling)arg3 ;
-(id)englishName;
-(id)localizedFontName;
@end

