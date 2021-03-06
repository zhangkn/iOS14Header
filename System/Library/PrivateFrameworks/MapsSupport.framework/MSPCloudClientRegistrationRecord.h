/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSUUID;

@interface MSPCloudClientRegistrationRecord : NSObject {

	BOOL _isChanged;
	NSDate* _lastRegistrationDate;
	NSUUID* _clientIdentifier;
	unsigned long long _desiredEpoch;
	unsigned long long _earliestCompatibleEpoch;

}

@property (nonatomic,retain) NSUUID * clientIdentifier;                               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long desiredEpoch;                         //@synthesize desiredEpoch=_desiredEpoch - In the implementation block
@property (assign,nonatomic) unsigned long long earliestCompatibleEpoch;              //@synthesize earliestCompatibleEpoch=_earliestCompatibleEpoch - In the implementation block
@property (nonatomic,readonly) BOOL isChanged;                                        //@synthesize isChanged=_isChanged - In the implementation block
@property (nonatomic,retain) NSDate * lastRegistrationDate;                           //@synthesize lastRegistrationDate=_lastRegistrationDate - In the implementation block
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSUUID *)clientIdentifier;
-(id)recordRepresentation;
-(unsigned long long)earliestCompatibleEpoch;
-(void)setEarliestCompatibleEpoch:(unsigned long long)arg1 ;
-(void)setDesiredEpoch:(unsigned long long)arg1 ;
-(void)setLastRegistrationDate:(NSDate *)arg1 ;
-(NSDate *)lastRegistrationDate;
-(unsigned long long)desiredEpoch;
-(BOOL)isChanged;
@end

