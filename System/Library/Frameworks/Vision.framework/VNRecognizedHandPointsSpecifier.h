/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:19 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/VNRecognizedPointsSpecifier.h>

@class NSArray;

@interface VNRecognizedHandPointsSpecifier : VNRecognizedPointsSpecifier {

	NSArray* _orderedHandKeypoints;

}
+(BOOL)supportsSecureCoding;
-(id)availableGroupKeys;
-(id)pointKeyGroupLabelsMapping;
-(id)populatedMLMultiArrayAndReturnError:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithVCPHandObservation:(id)arg1 requestRevision:(unsigned long long)arg2 ;
@end

