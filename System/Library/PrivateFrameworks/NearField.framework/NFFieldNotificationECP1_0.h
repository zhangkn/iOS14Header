/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFFieldNotification.h>

@interface NFFieldNotificationECP1_0 : NFFieldNotification {

	BOOL _odaRequired;
	unsigned _terminalMode;
	unsigned _terminalType;

}

@property (readonly) BOOL odaRequired;                   //@synthesize odaRequired=_odaRequired - In the implementation block
@property (readonly) unsigned terminalMode;              //@synthesize terminalMode=_terminalMode - In the implementation block
@property (readonly) unsigned terminalType;              //@synthesize terminalType=_terminalType - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)terminalMode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)terminalType;
-(id)description;
-(BOOL)odaRequired;
@end
