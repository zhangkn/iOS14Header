/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXSSKeyChord, _VOSProfileCommand;

@interface _VOSProfileKeyChord : NSObject <NSSecureCoding> {

	AXSSKeyChord* _keyChord;
	_VOSProfileCommand* _command;

}

@property (nonatomic,retain) AXSSKeyChord * keyChord;                          //@synthesize keyChord=_keyChord - In the implementation block
@property (assign,nonatomic,__weak) _VOSProfileCommand * command;              //@synthesize command=_command - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)profileKeyChordWithKeyChord:(id)arg1 ;
+(id)profileKeyChordWithStringValue:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(_VOSProfileCommand *)command;
-(id)description;
-(void)setCommand:(_VOSProfileCommand *)arg1 ;
-(AXSSKeyChord *)keyChord;
-(id)_initWithKeyChord:(id)arg1 ;
-(void)setKeyChord:(AXSSKeyChord *)arg1 ;
@end

