/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSNumber;

@interface DIAttributeImageCaptureRequirements : NSObject <NSSecureCoding> {

	BOOL _liveliness;
	unsigned long long _selection;
	unsigned long long _minHeight;
	unsigned long long _minWidth;
	unsigned long long _preferredHeight;
	unsigned long long _preferredWidth;
	unsigned long long _ratioHeight;
	unsigned long long _ratioWidth;
	unsigned long long _minBorderPadding;
	NSArray* _supportedEncoding;
	NSString* _userMessage;
	NSNumber* _compressionRatio;
	NSNumber* _maximumCompressionRatio;
	unsigned long long _timeout;
	unsigned long long _maxRetakeCount;

}

@property (assign,nonatomic) unsigned long long selection;                     //@synthesize selection=_selection - In the implementation block
@property (assign,nonatomic) unsigned long long minHeight;                     //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) unsigned long long minWidth;                      //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) unsigned long long preferredHeight;               //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,nonatomic) unsigned long long preferredWidth;                //@synthesize preferredWidth=_preferredWidth - In the implementation block
@property (assign,nonatomic) unsigned long long ratioHeight;                   //@synthesize ratioHeight=_ratioHeight - In the implementation block
@property (assign,nonatomic) unsigned long long ratioWidth;                    //@synthesize ratioWidth=_ratioWidth - In the implementation block
@property (assign,nonatomic) unsigned long long minBorderPadding;              //@synthesize minBorderPadding=_minBorderPadding - In the implementation block
@property (nonatomic,retain) NSNumber * compressionRatio;                      //@synthesize compressionRatio=_compressionRatio - In the implementation block
@property (nonatomic,retain) NSNumber * maximumCompressionRatio;               //@synthesize maximumCompressionRatio=_maximumCompressionRatio - In the implementation block
@property (nonatomic,copy) NSString * userMessage;                             //@synthesize userMessage=_userMessage - In the implementation block
@property (nonatomic,copy) NSArray * supportedEncoding;                        //@synthesize supportedEncoding=_supportedEncoding - In the implementation block
@property (assign,nonatomic) BOOL liveliness;                                  //@synthesize liveliness=_liveliness - In the implementation block
@property (assign,nonatomic) unsigned long long timeout;                       //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) unsigned long long maxRetakeCount;                //@synthesize maxRetakeCount=_maxRetakeCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)userMessage;
-(void)setUserMessage:(NSString *)arg1 ;
-(unsigned long long)timeout;
-(unsigned long long)minWidth;
-(void)setMinWidth:(unsigned long long)arg1 ;
-(unsigned long long)minHeight;
-(void)setTimeout:(unsigned long long)arg1 ;
-(unsigned long long)preferredHeight;
-(void)setPreferredWidth:(unsigned long long)arg1 ;
-(NSNumber *)compressionRatio;
-(void)setCompressionRatio:(NSNumber *)arg1 ;
-(void)setSelection:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPreferredHeight:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMinHeight:(unsigned long long)arg1 ;
-(unsigned long long)selection;
-(unsigned long long)preferredWidth;
-(id)description;
-(unsigned long long)ratioHeight;
-(void)setRatioHeight:(unsigned long long)arg1 ;
-(unsigned long long)ratioWidth;
-(void)setRatioWidth:(unsigned long long)arg1 ;
-(unsigned long long)minBorderPadding;
-(void)setMinBorderPadding:(unsigned long long)arg1 ;
-(NSArray *)supportedEncoding;
-(void)setSupportedEncoding:(NSArray *)arg1 ;
-(NSNumber *)maximumCompressionRatio;
-(void)setMaximumCompressionRatio:(NSNumber *)arg1 ;
-(BOOL)liveliness;
-(void)setLiveliness:(BOOL)arg1 ;
-(unsigned long long)maxRetakeCount;
-(void)setMaxRetakeCount:(unsigned long long)arg1 ;
@end

