main () // Aqui es donde inicia nuestro programa/7
{
     int opcion; //Variable y la estoy declarando//
     printf("¿De que producto quieres saber el precio?") /7 printf muestra lo que se mostra en en la pantalla//
     printf ("1. Tortillas");
     printf ("2. Manzanas");
     printf ("3. Refresco");
     printf ("4. Garrafón de agua");
     printf ("5. Verdura");

     scanf ("i", &opcion); // scanf la i es para indicar esperas un numero//

    switch (opcion) /7 Aqui es donde cuando el usuario presiona la tecla con opciones en pantalla //
    {
        case 1: // El usuario presiona el teclado y le saldra la opcion en empatalla de abajo/7
            printf ("el KG de tortilla vale $21");
            break;  // Break es para que no se valla a otras opciones para valla directo a mostra la opcion//
        case 2: 
            printf ("el KG de manzana vale $50");
            break;
        case 3:
            printf ("el refresco de litro vale $18");
            break;
        case 4:    
            printf ("el Kg de verdura mixta vale $30"):
            break;

    }
    printf ("Gracias por ver mi Menu"); 7/ Aqui es el final del programa//
}