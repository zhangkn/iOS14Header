/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, SSHarvestedApplicationDocument, BSSettings;

@interface SSEnvironmentElementDocumentUpdate : NSObject <BSXPCCoding, SSLoggable> {

	NSString* _environmentElementIdentifier;
	SSHarvestedApplicationDocument* _document;

}

@property (nonatomic,copy) NSString * environmentElementIdentifier;                  //@synthesize environmentElementIdentifier=_environmentElementIdentifier - In the implementation block
@property (nonatomic,retain) SSHarvestedApplicationDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) BSSettings * bsSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(SSHarvestedApplicationDocument *)document;
-(void)setDocument:(SSHarvestedApplicationDocument *)arg1 ;
-(NSString *)loggableDescription;
-(void)setEnvironmentElementIdentifier:(NSString *)arg1 ;
-(BSSettings *)bsSettings;
-(NSString *)environmentElementIdentifier;
@end

