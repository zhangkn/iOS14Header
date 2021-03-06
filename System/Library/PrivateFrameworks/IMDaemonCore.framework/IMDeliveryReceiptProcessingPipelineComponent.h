/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCorePipeline/IMPipelineComponent.h>

@class IMDMessageStore;

@interface IMDeliveryReceiptProcessingPipelineComponent : IMPipelineComponent {

	IMDMessageStore* _messageStore;

}
-(id)initWithMessageStore:(id)arg1 ;
-(id)runIndividuallyWithInput:(id)arg1 ;
-(id)_processDeliveryReceiptForMessageGUID:(id)arg1 date:(id)arg2 ;
-(void)_metricMessageGUIDDelivered:(id)arg1 sendDate:(id)arg2 deliveryDate:(id)arg3 ;
@end

