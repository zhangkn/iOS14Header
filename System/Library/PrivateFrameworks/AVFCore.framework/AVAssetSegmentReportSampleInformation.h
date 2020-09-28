/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@interface AVAssetSegmentReportSampleInformation : NSObject {

	SCD_Struct_AV6 _presentationTimeStamp;
	long long _offset;
	long long _length;
	BOOL _isSyncSample;

}

@property (nonatomic,readonly) SCD_Struct_AV6 presentationTimeStamp;              //@synthesize presentationTimeStamp=_presentationTimeStamp - In the implementation block
@property (nonatomic,readonly) long long offset;                                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) long long length;                                  //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) BOOL isSyncSample;                                 //@synthesize isSyncSample=_isSyncSample - In the implementation block
-(void)dealloc;
-(long long)length;
-(long long)offset;
-(BOOL)isSyncSample;
-(id)initWithFigSegmentReportSampleInformationDictionary:(id)arg1 ;
-(SCD_Struct_AV6)presentationTimeStamp;
@end
