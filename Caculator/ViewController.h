//
//  ViewController.h
//  Caculator
//
//  Created by Apple Like on 3/22/14.
//  Copyright (c) 2014 dungkt. All rights reserved.
//

#import <UIKit/UIKit.h>

int Method;
long long SelectNumber;
float RunningTotal;

@interface ViewController : UIViewController
{
    IBOutlet UILabel *Screen;
}

-(IBAction)Number1:(id)sender;
-(IBAction)Number2:(id)sender;
-(IBAction)Number3:(id)sender;
-(IBAction)Number4:(id)sender;
-(IBAction)Number5:(id)sender;
-(IBAction)Number6:(id)sender;
-(IBAction)Number7:(id)sender;
-(IBAction)Number8:(id)sender;
-(IBAction)Number9:(id)sender;
-(IBAction)Number0:(id)sender;

-(IBAction)Times:(id)sender;
-(IBAction)Devide:(id)sender;
-(IBAction)Subtract:(id)sender;
-(IBAction)Plus:(id)sender;
-(IBAction)Equals:(id)sender;

-(IBAction)AllClear:(id)sender;



@end
