/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _TVScreenSaverRequest : NSObject {

	/*^block*/id _responseBlock;
	NSDictionary* _options;

}

@property (nonatomic,copy) id responseBlock;                      //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,retain) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
@end
