
//
//  CSDInstrument.h
//  CsdReinvention
//
//  Created by Aurelius Prochazka on 4/11/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSDOrchestra.h"
#import "CSDOpcode.h"

@interface CSDInstrument : NSObject {
    NSMutableString * csdRepresentation;
}

@property (nonatomic, strong) CSDOrchestra * orchestra;

-(id) initWithOrchestra:(CSDOrchestra *) newOrchestra;
-(void) joinOrchestra:(CSDOrchestra *) newOrchestra;
-(void) addOpcode:(CSDOpcode *) newOpcode;
-(NSString *) textForOrchestra;

@end