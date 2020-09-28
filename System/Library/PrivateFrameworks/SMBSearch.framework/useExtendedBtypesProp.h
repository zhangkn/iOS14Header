/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:11 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WspPropertyProtocol.h>

@class cdbProp, cbaseVariant;

@interface useExtendedBtypesProp : NSObject <WspPropertyProtocol> {

	cdbProp* _cProps;
	cbaseVariant* _variant;

}

@property (retain) cdbProp * cProps;                    //@synthesize cProps=_cProps - In the implementation block
@property (retain) cbaseVariant * variant;              //@synthesize variant=_variant - In the implementation block
-(cbaseVariant *)variant;
-(void)setVariant:(cbaseVariant *)arg1 ;
-(cdbProp *)cProps;
-(id)initWithBool:(BOOL)arg1 ;
-(unsigned)propertyID;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(void)setCProps:(cdbProp *)arg1 ;
@end
