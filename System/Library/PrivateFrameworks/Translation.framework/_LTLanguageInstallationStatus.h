/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _LTLanguageInstallationStatus : NSObject <NSSecureCoding> {

	BOOL _isStalled;
	long long _progress;
	NSString* _localeIdentifier;
	unsigned long long _offlineState;
	long long _totalExpected;
	long long _totalWritten;
	double _expectedTimeRemaining;

}

@property (assign,nonatomic) long long progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                    //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long offlineState;              //@synthesize offlineState=_offlineState - In the implementation block
@property (assign,nonatomic) long long totalExpected;                      //@synthesize totalExpected=_totalExpected - In the implementation block
@property (assign,nonatomic) long long totalWritten;                       //@synthesize totalWritten=_totalWritten - In the implementation block
@property (assign,nonatomic) BOOL isStalled;                               //@synthesize isStalled=_isStalled - In the implementation block
@property (assign,nonatomic) double expectedTimeRemaining;                 //@synthesize expectedTimeRemaining=_expectedTimeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)setTotalWritten:(long long)arg1 ;
-(void)setTotalExpected:(long long)arg1 ;
-(void)setIsStalled:(BOOL)arg1 ;
-(void)setExpectedTimeRemaining:(double)arg1 ;
-(double)expectedTimeRemaining;
-(unsigned long long)offlineState;
-(void)setOfflineState:(unsigned long long)arg1 ;
-(BOOL)isStalled;
-(void)setProgress:(long long)arg1 ;
-(id)init;
-(long long)totalExpected;
-(id)initWithCoder:(id)arg1 ;
-(long long)totalWritten;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)progress;
-(NSString *)localeIdentifier;
-(id)description;
@end

