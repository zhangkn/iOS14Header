/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDObject.h>

@class NSMutableArray;

@interface ESDRoot : ESDObject {

	NSMutableArray* mChildren;

}
-(void)addChild:(id)arg1 ;
-(unsigned long long)childCount;
-(id)init;
-(EshRoot*)eshRoot;
-(id)childAt:(unsigned long long)arg1 ;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(void)writeToWriter:(OcWriterRef)arg1 ;
-(id)initFromReader:(OcReader*)arg1 ;
-(id)pbReferenceWithID:(unsigned)arg1 ;
-(id)initWithPbState:(id)arg1 ;
@end

