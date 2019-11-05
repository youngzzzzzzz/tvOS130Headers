/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVHKContributorImageLoadParams;

@interface TVHKTemplateImageURLRequest : NSObject {

	TVHKContributorImageLoadParams* _params;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) TVHKContributorImageLoadParams * params;              //@synthesize params=_params - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(TVHKContributorImageLoadParams *)params;
-(void)setParams:(TVHKContributorImageLoadParams *)arg1 ;
@end
