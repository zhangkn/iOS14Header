/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSString;

@interface BSXPCCodingArray : NSObject <NSFastEnumeration, BSXPCCoding, BSDescriptionProviding> {

	NSArray* _array;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithArray:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BS12*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(unsigned long long)count;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
@end
