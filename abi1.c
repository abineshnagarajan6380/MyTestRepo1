<!-- <h1>interpolation example </h1>
<br> -->
<!-- <app-mynewcomponent></app-mynewcomponent> -->
<!-- <br>
Name:{{name}}
<br>age:{{age}}
<br>Email<input type="text" value="{{email}}" />
<h1>Property Binding  Example</h1>
<br>Name <input type="text" [value]="name" />
<br>Age <input type="text" [value]="age" />
<br>Email <input type="text" [value]="email" />

<h1>Event Binding Example </h1>
<button (click)="changeName()">Change Name</button><br>
<button (click)="changeage()">Change age</button><br>
<button (click)="changeemail()">Change email</button>
<br>
<img [src]="imagePath" width="300" height="200">
<br>
<button (click)="changeImage()">changeimage</button> -->
<h1>Two Data Binding </h1>
<br>
Enter your first name <input type="text" [{ngModel}]="fname" />
<br>
<b>Welcome {{fname}}</b>

