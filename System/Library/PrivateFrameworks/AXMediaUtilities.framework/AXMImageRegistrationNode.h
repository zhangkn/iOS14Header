/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMPipelineContextInput;

@interface AXMImageRegistrationNode : AXMEvaluationNode <NSSecureCoding> {

	AXMPipelineContextInput* _previousInput;
	AXMPipelineContextInput* _currentInput;
	CGPoint _transpositionHistoryCircularBuffer[10];
	unsigned long long _transpositionHistoryLastRecordedIndex;
	BOOL _fillingHistoryBuffer;
	long long _registrationState;

}

@property (nonatomic,readonly) long long registrationState; 
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)requiresVisionFramework;
-(long long)registrationState;
-(void)_resetTranspositionHistory;
-(id)_translationalImageRegistrationRequestForInput:(id)arg1 ;
-(void)_recordTransposition:(CGPoint)arg1 ;
-(void)_resetImageRegistration;
-(void)nodeInitialize;
@end

