/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/NumbersQuicklook.framework/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NumbersQuicklook/NumbersQuicklook-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSEnumerator;

@interface TNChartFormulaArgumentEnumerator : NSObject <NSFastEnumeration> {

	NSEnumerator* _underlyingEnumerator;

}
-(id)nextElement;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TN31*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)nextObject;
-(id)initWithEnumerator:(id)arg1 ;
@end

