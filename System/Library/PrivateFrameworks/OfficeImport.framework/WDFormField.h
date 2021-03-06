/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDFormField : WDRun {

	unsigned mPosition;
	BOOL mLinkAbsolute;
	BOOL mLinkSpecifyingNamedLocation;
	NSString* mNamedLocation;
	NSString* mURI;
	NSString* mMacName;
	NSString* mDosName;

}
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(void)setURI:(id)arg1 ;
-(id)URI;
-(id)namedLocation;
-(void)setNamedLocation:(id)arg1 ;
-(int)runType;
-(id)macName;
-(id)dosName;
-(id)description;
-(id)initWithParagraph:(id)arg1 ;
-(BOOL)linkAbsolute;
-(void)setLinkAbsolute:(BOOL)arg1 ;
-(BOOL)linkSpecifyingNamedLocation;
-(void)setLinkSpecifyingNamedLocation:(BOOL)arg1 ;
-(void)setMacName:(id)arg1 ;
-(void)setDosName:(id)arg1 ;
@end

