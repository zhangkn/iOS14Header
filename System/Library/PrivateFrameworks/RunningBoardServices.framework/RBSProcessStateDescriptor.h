/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSArray, NSString;

@interface RBSProcessStateDescriptor : NSObject <RBSXPCSecureCoding, NSCopying> {

	NSSet* _endowmentNamespaces;
	unsigned long long _values;

}

@property (assign,nonatomic) unsigned long long values;                //@synthesize values=_values - In the implementation block
@property (nonatomic,copy) NSArray * endowmentNamespaces; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptor;
+(BOOL)supportsRBSXPCSecureCoding;
-(unsigned long long)values;
-(void)setValues:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(void)filterState:(id)arg1 ;
-(void)setEndowmentNamespaces:(NSArray *)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)_endowmentNamespaces;
-(NSArray *)endowmentNamespaces;
-(NSString *)description;
@end
