/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WFImage, ICApp, WFAccessResource;

@interface WFGalleryService : NSObject {

	NSString* _name;
	WFImage* _icon;
	ICApp* _app;
	WFAccessResource* _accessResource;

}

@property (nonatomic,readonly) ICApp * app;                                    //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) WFAccessResource * accessResource;              //@synthesize accessResource=_accessResource - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WFImage * icon;                                 //@synthesize icon=_icon - In the implementation block
+(id)serviceWithApp:(id)arg1 ;
+(id)serviceWithAccessResource:(id)arg1 ;
+(id)servicesForWorkflow:(id)arg1 ;
-(WFImage *)icon;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(ICApp *)app;
-(id)description;
-(void)loadIconWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFAccessResource *)accessResource;
@end

