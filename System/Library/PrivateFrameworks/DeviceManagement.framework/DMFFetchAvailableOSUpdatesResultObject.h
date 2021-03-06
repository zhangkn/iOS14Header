/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class DMFOSUpdate;

@interface DMFFetchAvailableOSUpdatesResultObject : CATTaskResultObject {

	DMFOSUpdate* _update;

}

@property (nonatomic,copy,readonly) DMFOSUpdate * update;              //@synthesize update=_update - In the implementation block
+(BOOL)supportsSecureCoding;
-(DMFOSUpdate *)update;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUpdate:(id)arg1 ;
-(id)description;
@end

