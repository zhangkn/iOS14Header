/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface DEValidationEntry : NSObject {

	NSString* _text;
	NSString* _textWithLineNumber;
	NSNumber* _lineNumber;
	NSString* _filename;

}

@property (nonatomic,retain) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * textWithLineNumber;              //@synthesize textWithLineNumber=_textWithLineNumber - In the implementation block
@property (nonatomic,retain) NSNumber * lineNumber;                      //@synthesize lineNumber=_lineNumber - In the implementation block
@property (nonatomic,retain) NSString * filename;                        //@synthesize filename=_filename - In the implementation block
-(void)setLineNumber:(NSNumber *)arg1 ;
-(NSNumber *)lineNumber;
-(void)setFilename:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)textWithLineNumber;
-(void)setTextWithLineNumber:(NSString *)arg1 ;
-(NSString *)filename;
@end
