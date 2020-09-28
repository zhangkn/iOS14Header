/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface HDFHIREndpointSchemaParseResult : NSObject {

	NSDictionary* _authorizationSchemas;
	NSArray* _resourceSchemas;

}

@property (nonatomic,copy) NSDictionary * authorizationSchemas;              //@synthesize authorizationSchemas=_authorizationSchemas - In the implementation block
@property (nonatomic,copy) NSArray * resourceSchemas;                        //@synthesize resourceSchemas=_resourceSchemas - In the implementation block
-(NSArray *)resourceSchemas;
-(NSDictionary *)authorizationSchemas;
-(void)setAuthorizationSchemas:(NSDictionary *)arg1 ;
-(void)setResourceSchemas:(NSArray *)arg1 ;
@end
