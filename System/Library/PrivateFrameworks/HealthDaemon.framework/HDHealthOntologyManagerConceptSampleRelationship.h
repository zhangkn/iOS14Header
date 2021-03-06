/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, HKConceptIdentifier;

@interface HDHealthOntologyManagerConceptSampleRelationship : NSObject {

	NSUUID* _sampleUUID;
	HKConceptIdentifier* _conceptIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * sampleUUID;                                  //@synthesize sampleUUID=_sampleUUID - In the implementation block
@property (nonatomic,copy,readonly) HKConceptIdentifier * conceptIdentifier;              //@synthesize conceptIdentifier=_conceptIdentifier - In the implementation block
-(id)init;
-(HKConceptIdentifier *)conceptIdentifier;
-(NSUUID *)sampleUUID;
-(id)initWithSampleUUID:(id)arg1 conceptIdentifier:(id)arg2 ;
@end

