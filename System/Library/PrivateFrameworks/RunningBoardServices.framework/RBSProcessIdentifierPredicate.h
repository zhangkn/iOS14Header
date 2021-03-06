/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@protocol RBSProcessIdentifier;
@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl {

	id<RBSProcessIdentifier> _identifier;

}

@property (nonatomic,readonly) id<RBSProcessIdentifier> identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsRBSXPCSecureCoding;
-(id)initWithIdentifier:(id)arg1 ;
-(id<RBSProcessIdentifier>)identifier;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)processPredicate;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)matchesProcess:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

