/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface QLUTIAnalyzer : NSObject <NSSecureCoding> {

	NSString* _contentType;

}

@property (readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isTypeAudioOnly:(id)arg1 ;
+(id)UTIForURL:(id)arg1 ;
+(id)knownExtensions;
+(id)privateUTIFromFileName:(id)arg1 ;
+(id)removeSpacesFromString:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)contentType;
-(id)initWithContentType:(id)arg1 ;
-(BOOL)isAudioOnly;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
